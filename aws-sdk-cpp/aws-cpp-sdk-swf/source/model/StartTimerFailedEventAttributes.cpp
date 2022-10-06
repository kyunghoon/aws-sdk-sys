﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/StartTimerFailedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

StartTimerFailedEventAttributes::StartTimerFailedEventAttributes() : 
    m_timerIdHasBeenSet(false),
    m_cause(StartTimerFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

StartTimerFailedEventAttributes::StartTimerFailedEventAttributes(JsonView jsonValue) : 
    m_timerIdHasBeenSet(false),
    m_cause(StartTimerFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

StartTimerFailedEventAttributes& StartTimerFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timerId"))
  {
    m_timerId = jsonValue.GetString("timerId");

    m_timerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = StartTimerFailedCauseMapper::GetStartTimerFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTimerFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timerIdHasBeenSet)
  {
   payload.WithString("timerId", m_timerId);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", StartTimerFailedCauseMapper::GetNameForStartTimerFailedCause(m_cause));
  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
