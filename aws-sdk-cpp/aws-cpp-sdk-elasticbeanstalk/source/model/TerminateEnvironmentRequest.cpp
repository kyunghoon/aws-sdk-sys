﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/TerminateEnvironmentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

TerminateEnvironmentRequest::TerminateEnvironmentRequest() : 
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_terminateResources(false),
    m_terminateResourcesHasBeenSet(false),
    m_forceTerminate(false),
    m_forceTerminateHasBeenSet(false)
{
}

Aws::String TerminateEnvironmentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=TerminateEnvironment&";
  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_terminateResourcesHasBeenSet)
  {
    ss << "TerminateResources=" << std::boolalpha << m_terminateResources << "&";
  }

  if(m_forceTerminateHasBeenSet)
  {
    ss << "ForceTerminate=" << std::boolalpha << m_forceTerminate << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  TerminateEnvironmentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
