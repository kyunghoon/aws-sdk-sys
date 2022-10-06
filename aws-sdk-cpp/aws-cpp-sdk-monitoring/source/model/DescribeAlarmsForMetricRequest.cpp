﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

DescribeAlarmsForMetricRequest::DescribeAlarmsForMetricRequest() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_extendedStatisticHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Aws::String DescribeAlarmsForMetricRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAlarmsForMetric&";
  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_statisticHasBeenSet)
  {
    ss << "Statistic=" << StatisticMapper::GetNameForStatistic(m_statistic) << "&";
  }

  if(m_extendedStatisticHasBeenSet)
  {
    ss << "ExtendedStatistic=" << StringUtils::URLEncode(m_extendedStatistic.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    unsigned dimensionsCount = 1;
    for(auto& item : m_dimensions)
    {
      item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
      dimensionsCount++;
    }
  }

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << m_period << "&";
  }

  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StandardUnitMapper::GetNameForStandardUnit(m_unit) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  DescribeAlarmsForMetricRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
