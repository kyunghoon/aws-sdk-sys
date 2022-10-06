﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyEventSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyEventSubscriptionRequest::ModifyEventSubscriptionRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String ModifyEventSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyEventSubscription&";
  if(m_subscriptionNameHasBeenSet)
  {
    ss << "SubscriptionName=" << StringUtils::URLEncode(m_subscriptionName.c_str()) << "&";
  }

  if(m_snsTopicArnHasBeenSet)
  {
    ss << "SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
    ss << "SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
    unsigned eventCategoriesCount = 1;
    for(auto& item : m_eventCategories)
    {
      ss << "EventCategories.member." << eventCategoriesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      eventCategoriesCount++;
    }
  }

  if(m_enabledHasBeenSet)
  {
    ss << "Enabled=" << std::boolalpha << m_enabled << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyEventSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
