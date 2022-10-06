﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CopyDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CopyDBParameterGroupRequest::CopyDBParameterGroupRequest() : 
    m_sourceDBParameterGroupIdentifierHasBeenSet(false),
    m_targetDBParameterGroupIdentifierHasBeenSet(false),
    m_targetDBParameterGroupDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBParameterGroup&";
  if(m_sourceDBParameterGroupIdentifierHasBeenSet)
  {
    ss << "SourceDBParameterGroupIdentifier=" << StringUtils::URLEncode(m_sourceDBParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBParameterGroupIdentifierHasBeenSet)
  {
    ss << "TargetDBParameterGroupIdentifier=" << StringUtils::URLEncode(m_targetDBParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBParameterGroupDescriptionHasBeenSet)
  {
    ss << "TargetDBParameterGroupDescription=" << StringUtils::URLEncode(m_targetDBParameterGroupDescription.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CopyDBParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
