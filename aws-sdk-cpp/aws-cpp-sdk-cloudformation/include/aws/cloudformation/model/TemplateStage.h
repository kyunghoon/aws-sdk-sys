﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class TemplateStage
  {
    NOT_SET,
    Original,
    Processed
  };

namespace TemplateStageMapper
{
AWS_CLOUDFORMATION_API TemplateStage GetTemplateStageForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForTemplateStage(TemplateStage value);
} // namespace TemplateStageMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
