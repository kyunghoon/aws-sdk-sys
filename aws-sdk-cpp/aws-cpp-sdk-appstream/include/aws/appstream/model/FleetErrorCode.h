/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class FleetErrorCode
  {
    NOT_SET,
    IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION,
    IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION,
    IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION,
    NETWORK_INTERFACE_LIMIT_EXCEEDED,
    INTERNAL_SERVICE_ERROR,
    IAM_SERVICE_ROLE_IS_MISSING,
    MACHINE_ROLE_IS_MISSING,
    STS_DISABLED_IN_REGION,
    SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES,
    IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION,
    SUBNET_NOT_FOUND,
    IMAGE_NOT_FOUND,
    INVALID_SUBNET_CONFIGURATION,
    SECURITY_GROUPS_NOT_FOUND,
    IGW_NOT_ATTACHED,
    IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION,
    DOMAIN_JOIN_ERROR_FILE_NOT_FOUND,
    DOMAIN_JOIN_ERROR_ACCESS_DENIED,
    DOMAIN_JOIN_ERROR_LOGON_FAILURE,
    DOMAIN_JOIN_ERROR_INVALID_PARAMETER,
    DOMAIN_JOIN_ERROR_MORE_DATA,
    DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN,
    DOMAIN_JOIN_ERROR_NOT_SUPPORTED,
    DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME,
    DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED,
    DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED,
    DOMAIN_JOIN_NERR_PASSWORD_EXPIRED,
    DOMAIN_JOIN_INTERNAL_SERVICE_ERROR
  };

namespace FleetErrorCodeMapper
{
AWS_APPSTREAM_API FleetErrorCode GetFleetErrorCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForFleetErrorCode(FleetErrorCode value);
} // namespace FleetErrorCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
