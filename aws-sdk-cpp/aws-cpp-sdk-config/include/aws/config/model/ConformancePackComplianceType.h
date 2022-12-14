/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ConformancePackComplianceType
  {
    NOT_SET,
    COMPLIANT,
    NON_COMPLIANT
  };

namespace ConformancePackComplianceTypeMapper
{
AWS_CONFIGSERVICE_API ConformancePackComplianceType GetConformancePackComplianceTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConformancePackComplianceType(ConformancePackComplianceType value);
} // namespace ConformancePackComplianceTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
