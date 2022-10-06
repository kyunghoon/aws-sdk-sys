﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeploymentRequest::GetDeploymentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_deploymentNumber(0),
    m_deploymentNumberHasBeenSet(false)
{
}

Aws::String GetDeploymentRequest::SerializePayload() const
{
  return {};
}




