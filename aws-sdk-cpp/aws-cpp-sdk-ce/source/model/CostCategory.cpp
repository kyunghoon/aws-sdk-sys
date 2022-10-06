﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostCategory::CostCategory() : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleVersion(CostCategoryRuleVersion::NOT_SET),
    m_ruleVersionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_processingStatusHasBeenSet(false)
{
}

CostCategory::CostCategory(JsonView jsonValue) : 
    m_costCategoryArnHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleVersion(CostCategoryRuleVersion::NOT_SET),
    m_ruleVersionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_processingStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategory& CostCategory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostCategoryArn"))
  {
    m_costCategoryArn = jsonValue.GetString("CostCategoryArn");

    m_costCategoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveStart"))
  {
    m_effectiveStart = jsonValue.GetString("EffectiveStart");

    m_effectiveStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveEnd"))
  {
    m_effectiveEnd = jsonValue.GetString("EffectiveEnd");

    m_effectiveEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleVersion"))
  {
    m_ruleVersion = CostCategoryRuleVersionMapper::GetCostCategoryRuleVersionForName(jsonValue.GetString("RuleVersion"));

    m_ruleVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingStatus"))
  {
    Array<JsonView> processingStatusJsonList = jsonValue.GetArray("ProcessingStatus");
    for(unsigned processingStatusIndex = 0; processingStatusIndex < processingStatusJsonList.GetLength(); ++processingStatusIndex)
    {
      m_processingStatus.push_back(processingStatusJsonList[processingStatusIndex].AsObject());
    }
    m_processingStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategory::Jsonize() const
{
  JsonValue payload;

  if(m_costCategoryArnHasBeenSet)
  {
   payload.WithString("CostCategoryArn", m_costCategoryArn);

  }

  if(m_effectiveStartHasBeenSet)
  {
   payload.WithString("EffectiveStart", m_effectiveStart);

  }

  if(m_effectiveEndHasBeenSet)
  {
   payload.WithString("EffectiveEnd", m_effectiveEnd);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleVersionHasBeenSet)
  {
   payload.WithString("RuleVersion", CostCategoryRuleVersionMapper::GetNameForCostCategoryRuleVersion(m_ruleVersion));
  }

  if(m_rulesHasBeenSet)
  {
   Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_processingStatusHasBeenSet)
  {
   Array<JsonValue> processingStatusJsonList(m_processingStatus.size());
   for(unsigned processingStatusIndex = 0; processingStatusIndex < processingStatusJsonList.GetLength(); ++processingStatusIndex)
   {
     processingStatusJsonList[processingStatusIndex].AsObject(m_processingStatus[processingStatusIndex].Jsonize());
   }
   payload.WithArray("ProcessingStatus", std::move(processingStatusJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
