﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DataExchange
{
namespace Model
{
  class AWS_DATAEXCHANGE_API GetRevisionResult
  {
  public:
    GetRevisionResult();
    GetRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN for the revision</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the revision</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN for the revision</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN for the revision</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN for the revision</p>
     */
    inline GetRevisionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the revision</p>
     */
    inline GetRevisionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the revision</p>
     */
    inline GetRevisionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An optional comment about the revision.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline void SetComment(const Aws::String& value) { m_comment = value; }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline void SetComment(Aws::String&& value) { m_comment = std::move(value); }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline void SetComment(const char* value) { m_comment.assign(value); }

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline GetRevisionResult& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline GetRevisionResult& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment about the revision.</p>
     */
    inline GetRevisionResult& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline GetRevisionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the revision was created, in ISO 8601 format.</p>
     */
    inline GetRevisionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }

    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }

    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }

    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline GetRevisionResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline GetRevisionResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the data set associated with this revision.</p>
     */
    inline GetRevisionResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products.</p> <p>Finalized revisions can be
     * published through the AWS Data Exchange console or the AWS Marketplace Catalog
     * API, using the StartChangeSet AWS Marketplace Catalog API action. When using the
     * API, revisions are uniquely identified by their ARN.</p>
     */
    inline bool GetFinalized() const{ return m_finalized; }

    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products.</p> <p>Finalized revisions can be
     * published through the AWS Data Exchange console or the AWS Marketplace Catalog
     * API, using the StartChangeSet AWS Marketplace Catalog API action. When using the
     * API, revisions are uniquely identified by their ARN.</p>
     */
    inline void SetFinalized(bool value) { m_finalized = value; }

    /**
     * <p>To publish a revision to a data set in a product, the revision must first be
     * finalized. Finalizing a revision tells AWS Data Exchange that your changes to
     * the assets in the revision are complete. After it's in this read-only state, you
     * can publish the revision to your products.</p> <p>Finalized revisions can be
     * published through the AWS Data Exchange console or the AWS Marketplace Catalog
     * API, using the StartChangeSet AWS Marketplace Catalog API action. When using the
     * API, revisions are uniquely identified by their ARN.</p>
     */
    inline GetRevisionResult& WithFinalized(bool value) { SetFinalized(value); return *this;}


    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline GetRevisionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline GetRevisionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the revision.</p>
     */
    inline GetRevisionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceId = value; }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceId = std::move(value); }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceId.assign(value); }

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline GetRevisionResult& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline GetRevisionResult& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the owned revision corresponding to the entitled revision
     * being viewed. This parameter is returned when a revision owner is viewing the
     * entitled copy of its owned revision.</p>
     */
    inline GetRevisionResult& WithSourceId(const char* value) { SetSourceId(value); return *this;}


    /**
     * <p>The tags for the revision.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the revision.</p>
     */
    inline GetRevisionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline GetRevisionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the revision was last updated, in ISO 8601 format.</p>
     */
    inline GetRevisionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_comment;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_dataSetId;

    bool m_finalized;

    Aws::String m_id;

    Aws::String m_sourceId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
