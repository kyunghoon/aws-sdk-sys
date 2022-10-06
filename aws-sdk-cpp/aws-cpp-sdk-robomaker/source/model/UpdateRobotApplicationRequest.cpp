﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/UpdateRobotApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRobotApplicationRequest::UpdateRobotApplicationRequest() : 
    m_applicationHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_robotSoftwareSuiteHasBeenSet(false),
    m_currentRevisionIdHasBeenSet(false)
{
}

Aws::String UpdateRobotApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_sourcesHasBeenSet)
  {
   Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_robotSoftwareSuiteHasBeenSet)
  {
   payload.WithObject("robotSoftwareSuite", m_robotSoftwareSuite.Jsonize());

  }

  if(m_currentRevisionIdHasBeenSet)
  {
   payload.WithString("currentRevisionId", m_currentRevisionId);

  }

  return payload.View().WriteReadable();
}




