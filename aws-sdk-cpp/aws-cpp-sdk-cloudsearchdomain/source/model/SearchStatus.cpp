﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/SearchStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

SearchStatus::SearchStatus() : 
    m_timems(0),
    m_timemsHasBeenSet(false),
    m_ridHasBeenSet(false)
{
}

SearchStatus::SearchStatus(JsonView jsonValue) : 
    m_timems(0),
    m_timemsHasBeenSet(false),
    m_ridHasBeenSet(false)
{
  *this = jsonValue;
}

SearchStatus& SearchStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timems"))
  {
    m_timems = jsonValue.GetInt64("timems");

    m_timemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rid"))
  {
    m_rid = jsonValue.GetString("rid");

    m_ridHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchStatus::Jsonize() const
{
  JsonValue payload;

  if(m_timemsHasBeenSet)
  {
   payload.WithInt64("timems", m_timems);

  }

  if(m_ridHasBeenSet)
  {
   payload.WithString("rid", m_rid);

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
