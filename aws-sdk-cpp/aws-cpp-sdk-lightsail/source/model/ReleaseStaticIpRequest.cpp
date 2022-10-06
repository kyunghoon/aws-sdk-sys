﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ReleaseStaticIpRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReleaseStaticIpRequest::ReleaseStaticIpRequest() : 
    m_staticIpNameHasBeenSet(false)
{
}

Aws::String ReleaseStaticIpRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_staticIpNameHasBeenSet)
  {
   payload.WithString("staticIpName", m_staticIpName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReleaseStaticIpRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.ReleaseStaticIp"));
  return headers;

}




