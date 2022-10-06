﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreatePlayerSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePlayerSessionsResult::CreatePlayerSessionsResult()
{
}

CreatePlayerSessionsResult::CreatePlayerSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePlayerSessionsResult& CreatePlayerSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PlayerSessions"))
  {
    Array<JsonView> playerSessionsJsonList = jsonValue.GetArray("PlayerSessions");
    for(unsigned playerSessionsIndex = 0; playerSessionsIndex < playerSessionsJsonList.GetLength(); ++playerSessionsIndex)
    {
      m_playerSessions.push_back(playerSessionsJsonList[playerSessionsIndex].AsObject());
    }
  }



  return *this;
}
