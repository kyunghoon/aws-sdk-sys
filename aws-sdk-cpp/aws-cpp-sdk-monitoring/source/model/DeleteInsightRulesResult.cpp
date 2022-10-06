﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DeleteInsightRulesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeleteInsightRulesResult::DeleteInsightRulesResult()
{
}

DeleteInsightRulesResult::DeleteInsightRulesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteInsightRulesResult& DeleteInsightRulesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteInsightRulesResult"))
  {
    resultNode = rootNode.FirstChild("DeleteInsightRulesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode failuresNode = resultNode.FirstChild("Failures");
    if(!failuresNode.IsNull())
    {
      XmlNode failuresMember = failuresNode.FirstChild("member");
      while(!failuresMember.IsNull())
      {
        m_failures.push_back(failuresMember);
        failuresMember = failuresMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudWatch::Model::DeleteInsightRulesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
