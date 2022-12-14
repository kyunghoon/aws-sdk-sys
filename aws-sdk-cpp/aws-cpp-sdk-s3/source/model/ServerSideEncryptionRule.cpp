/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ServerSideEncryptionRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

ServerSideEncryptionRule::ServerSideEncryptionRule() : 
    m_applyServerSideEncryptionByDefaultHasBeenSet(false)
{
}

ServerSideEncryptionRule::ServerSideEncryptionRule(const XmlNode& xmlNode) : 
    m_applyServerSideEncryptionByDefaultHasBeenSet(false)
{
  *this = xmlNode;
}

ServerSideEncryptionRule& ServerSideEncryptionRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode applyServerSideEncryptionByDefaultNode = resultNode.FirstChild("ApplyServerSideEncryptionByDefault");
    if(!applyServerSideEncryptionByDefaultNode.IsNull())
    {
      m_applyServerSideEncryptionByDefault = applyServerSideEncryptionByDefaultNode;
      m_applyServerSideEncryptionByDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void ServerSideEncryptionRule::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_applyServerSideEncryptionByDefaultHasBeenSet)
  {
   XmlNode applyServerSideEncryptionByDefaultNode = parentNode.CreateChildElement("ApplyServerSideEncryptionByDefault");
   m_applyServerSideEncryptionByDefault.AddToNode(applyServerSideEncryptionByDefaultNode);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
