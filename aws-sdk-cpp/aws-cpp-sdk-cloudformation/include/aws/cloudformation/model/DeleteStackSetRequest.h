/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API DeleteStackSetRequest : public CloudFormationRequest
  {
  public:
    DeleteStackSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStackSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline DeleteStackSetRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline DeleteStackSetRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you're deleting. You can obtain
     * this value by running <a>ListStackSets</a>.</p>
     */
    inline DeleteStackSetRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
