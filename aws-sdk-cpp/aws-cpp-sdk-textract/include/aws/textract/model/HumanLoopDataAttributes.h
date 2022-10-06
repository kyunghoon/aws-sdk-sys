﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ContentClassifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{

  /**
   * <p>Allows you to set attributes of the image. Currently, you can declare an
   * image as free of personally identifiable information and adult content.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/HumanLoopDataAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API HumanLoopDataAttributes
  {
  public:
    HumanLoopDataAttributes();
    HumanLoopDataAttributes(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopDataAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline const Aws::Vector<ContentClassifier>& GetContentClassifiers() const{ return m_contentClassifiers; }

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline bool ContentClassifiersHasBeenSet() const { return m_contentClassifiersHasBeenSet; }

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline void SetContentClassifiers(const Aws::Vector<ContentClassifier>& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = value; }

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline void SetContentClassifiers(Aws::Vector<ContentClassifier>&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = std::move(value); }

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline HumanLoopDataAttributes& WithContentClassifiers(const Aws::Vector<ContentClassifier>& value) { SetContentClassifiers(value); return *this;}

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline HumanLoopDataAttributes& WithContentClassifiers(Aws::Vector<ContentClassifier>&& value) { SetContentClassifiers(std::move(value)); return *this;}

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline HumanLoopDataAttributes& AddContentClassifiers(const ContentClassifier& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(value); return *this; }

    /**
     * <p>Sets whether the input image is free of personally identifiable information
     * or adult content.</p>
     */
    inline HumanLoopDataAttributes& AddContentClassifiers(ContentClassifier&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContentClassifier> m_contentClassifiers;
    bool m_contentClassifiersHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
