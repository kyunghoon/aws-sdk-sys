﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class BlackoutSlateNetworkEndBlackout
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace BlackoutSlateNetworkEndBlackoutMapper
{
AWS_MEDIALIVE_API BlackoutSlateNetworkEndBlackout GetBlackoutSlateNetworkEndBlackoutForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBlackoutSlateNetworkEndBlackout(BlackoutSlateNetworkEndBlackout value);
} // namespace BlackoutSlateNetworkEndBlackoutMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
