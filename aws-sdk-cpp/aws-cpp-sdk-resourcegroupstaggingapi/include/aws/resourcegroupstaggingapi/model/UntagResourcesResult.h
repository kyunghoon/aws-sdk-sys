/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/FailureInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesResult
  {
  public:
    UntagResourcesResult();
    UntagResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UntagResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline const Aws::Map<Aws::String, FailureInfo>& GetFailedResourcesMap() const{ return m_failedResourcesMap; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline void SetFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { m_failedResourcesMap = value; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline void SetFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { m_failedResourcesMap = std::move(value); }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& WithFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { SetFailedResourcesMap(value); return *this;}

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& WithFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { SetFailedResourcesMap(std::move(value)); return *this;}

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& AddFailedResourcesMap(const Aws::String& key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& AddFailedResourcesMap(Aws::String&& key, const FailureInfo& value) { m_failedResourcesMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& AddFailedResourcesMap(const Aws::String& key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& AddFailedResourcesMap(Aws::String&& key, FailureInfo&& value) { m_failedResourcesMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& AddFailedResourcesMap(const char* key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details of resources that could not be untagged. An error code, status code,
     * and error message are returned for each failed item. </p>
     */
    inline UntagResourcesResult& AddFailedResourcesMap(const char* key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, FailureInfo> m_failedResourcesMap;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
