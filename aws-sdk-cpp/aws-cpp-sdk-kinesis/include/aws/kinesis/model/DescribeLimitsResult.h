﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>

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
namespace Kinesis
{
namespace Model
{
  class AWS_KINESIS_API DescribeLimitsResult
  {
  public:
    DescribeLimitsResult();
    DescribeLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maximum number of shards.</p>
     */
    inline int GetShardLimit() const{ return m_shardLimit; }

    /**
     * <p>The maximum number of shards.</p>
     */
    inline void SetShardLimit(int value) { m_shardLimit = value; }

    /**
     * <p>The maximum number of shards.</p>
     */
    inline DescribeLimitsResult& WithShardLimit(int value) { SetShardLimit(value); return *this;}


    /**
     * <p>The number of open shards.</p>
     */
    inline int GetOpenShardCount() const{ return m_openShardCount; }

    /**
     * <p>The number of open shards.</p>
     */
    inline void SetOpenShardCount(int value) { m_openShardCount = value; }

    /**
     * <p>The number of open shards.</p>
     */
    inline DescribeLimitsResult& WithOpenShardCount(int value) { SetOpenShardCount(value); return *this;}

  private:

    int m_shardLimit;

    int m_openShardCount;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
