﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountAssignmentCreationStatusResult::DescribeAccountAssignmentCreationStatusResult()
{
}

DescribeAccountAssignmentCreationStatusResult::DescribeAccountAssignmentCreationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountAssignmentCreationStatusResult& DescribeAccountAssignmentCreationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountAssignmentCreationStatus"))
  {
    m_accountAssignmentCreationStatus = jsonValue.GetObject("AccountAssignmentCreationStatus");

  }



  return *this;
}
