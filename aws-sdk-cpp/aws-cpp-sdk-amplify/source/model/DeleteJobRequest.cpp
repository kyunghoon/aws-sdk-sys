﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/DeleteJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteJobRequest::DeleteJobRequest() : 
    m_appIdHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

Aws::String DeleteJobRequest::SerializePayload() const
{
  return {};
}




