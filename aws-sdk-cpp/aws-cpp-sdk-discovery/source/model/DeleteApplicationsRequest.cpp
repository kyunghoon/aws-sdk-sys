﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DeleteApplicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationsRequest::DeleteApplicationsRequest() : 
    m_configurationIdsHasBeenSet(false)
{
}

Aws::String DeleteApplicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationIdsHasBeenSet)
  {
   Array<JsonValue> configurationIdsJsonList(m_configurationIds.size());
   for(unsigned configurationIdsIndex = 0; configurationIdsIndex < configurationIdsJsonList.GetLength(); ++configurationIdsIndex)
   {
     configurationIdsJsonList[configurationIdsIndex].AsString(m_configurationIds[configurationIdsIndex]);
   }
   payload.WithArray("configurationIds", std::move(configurationIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApplicationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPoseidonService_V2015_11_01.DeleteApplications"));
  return headers;

}




