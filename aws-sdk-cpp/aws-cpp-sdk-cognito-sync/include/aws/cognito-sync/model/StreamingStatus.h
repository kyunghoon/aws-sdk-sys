﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{
  enum class StreamingStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StreamingStatusMapper
{
AWS_COGNITOSYNC_API StreamingStatus GetStreamingStatusForName(const Aws::String& name);

AWS_COGNITOSYNC_API Aws::String GetNameForStreamingStatus(StreamingStatus value);
} // namespace StreamingStatusMapper
} // namespace Model
} // namespace CognitoSync
} // namespace Aws
