/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cognito-sync/CognitoSyncErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CognitoSync;

namespace Aws
{
namespace CognitoSync
{
namespace CognitoSyncErrorMapper
{

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalError");
static const int DUPLICATE_REQUEST_HASH = HashingUtils::HashString("DuplicateRequest");
static const int ALREADY_STREAMED_HASH = HashingUtils::HashString("AlreadyStreamed");
static const int INVALID_LAMBDA_FUNCTION_OUTPUT_HASH = HashingUtils::HashString("InvalidLambdaFunctionOutput");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameter");
static const int INVALID_CONFIGURATION_HASH = HashingUtils::HashString("InvalidConfiguration");
static const int NOT_AUTHORIZED_HASH = HashingUtils::HashString("NotAuthorizedError");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflict");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModification");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequests");
static const int LAMBDA_THROTTLED_HASH = HashingUtils::HashString("LambdaThrottled");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INTERNAL_ERROR), true);
  }
  else if (hashCode == DUPLICATE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::DUPLICATE_REQUEST), false);
  }
  else if (hashCode == ALREADY_STREAMED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::ALREADY_STREAMED), false);
  }
  else if (hashCode == INVALID_LAMBDA_FUNCTION_OUTPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INVALID_LAMBDA_FUNCTION_OUTPUT), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::INVALID_CONFIGURATION), false);
  }
  else if (hashCode == NOT_AUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::NOT_AUTHORIZED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == LAMBDA_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CognitoSyncErrors::LAMBDA_THROTTLED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CognitoSyncErrorMapper
} // namespace CognitoSync
} // namespace Aws
