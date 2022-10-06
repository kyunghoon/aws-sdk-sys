﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class InstanceStateName
  {
    NOT_SET,
    pending,
    running,
    shutting_down,
    terminated,
    stopping,
    stopped
  };

namespace InstanceStateNameMapper
{
AWS_EC2_API InstanceStateName GetInstanceStateNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceStateName(InstanceStateName value);
} // namespace InstanceStateNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
