﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CdiInputSpecification.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/ChannelState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/ChannelEgressEndpoint.h>
#include <aws/medialive/model/InputAttachment.h>
#include <aws/medialive/model/PipelineDetail.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for StopChannelResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API StopChannelResult
  {
  public:
    StopChannelResult();
    StopChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The unique arn of the channel.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The unique arn of the channel.
     */
    inline StopChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline StopChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique arn of the channel.
     */
    inline StopChannelResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Specification of CDI inputs for this channel
     */
    inline const CdiInputSpecification& GetCdiInputSpecification() const{ return m_cdiInputSpecification; }

    /**
     * Specification of CDI inputs for this channel
     */
    inline void SetCdiInputSpecification(const CdiInputSpecification& value) { m_cdiInputSpecification = value; }

    /**
     * Specification of CDI inputs for this channel
     */
    inline void SetCdiInputSpecification(CdiInputSpecification&& value) { m_cdiInputSpecification = std::move(value); }

    /**
     * Specification of CDI inputs for this channel
     */
    inline StopChannelResult& WithCdiInputSpecification(const CdiInputSpecification& value) { SetCdiInputSpecification(value); return *this;}

    /**
     * Specification of CDI inputs for this channel
     */
    inline StopChannelResult& WithCdiInputSpecification(CdiInputSpecification&& value) { SetCdiInputSpecification(std::move(value)); return *this;}


    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline void SetChannelClass(const ChannelClass& value) { m_channelClass = value; }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline void SetChannelClass(ChannelClass&& value) { m_channelClass = std::move(value); }

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline StopChannelResult& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}

    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline StopChannelResult& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}


    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinations = value; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinations = std::move(value); }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline StopChannelResult& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline StopChannelResult& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline StopChannelResult& AddDestinations(const OutputDestination& value) { m_destinations.push_back(value); return *this; }

    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.

     */
    inline StopChannelResult& AddDestinations(OutputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline void SetEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { m_egressEndpoints = value; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline void SetEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { m_egressEndpoints = std::move(value); }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline StopChannelResult& WithEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline StopChannelResult& WithEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline StopChannelResult& AddEgressEndpoints(const ChannelEgressEndpoint& value) { m_egressEndpoints.push_back(value); return *this; }

    /**
     * The endpoints where outgoing connections initiate from
     */
    inline StopChannelResult& AddEgressEndpoints(ChannelEgressEndpoint&& value) { m_egressEndpoints.push_back(std::move(value)); return *this; }


    
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }

    
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettings = value; }

    
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettings = std::move(value); }

    
    inline StopChannelResult& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}

    
    inline StopChannelResult& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}


    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique id of the channel.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The unique id of the channel.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The unique id of the channel.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The unique id of the channel.
     */
    inline StopChannelResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique id of the channel.
     */
    inline StopChannelResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique id of the channel.
     */
    inline StopChannelResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }

    /**
     * List of input attachments for channel.
     */
    inline void SetInputAttachments(const Aws::Vector<InputAttachment>& value) { m_inputAttachments = value; }

    /**
     * List of input attachments for channel.
     */
    inline void SetInputAttachments(Aws::Vector<InputAttachment>&& value) { m_inputAttachments = std::move(value); }

    /**
     * List of input attachments for channel.
     */
    inline StopChannelResult& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline StopChannelResult& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}

    /**
     * List of input attachments for channel.
     */
    inline StopChannelResult& AddInputAttachments(const InputAttachment& value) { m_inputAttachments.push_back(value); return *this; }

    /**
     * List of input attachments for channel.
     */
    inline StopChannelResult& AddInputAttachments(InputAttachment&& value) { m_inputAttachments.push_back(std::move(value)); return *this; }


    /**
     * Specification of network and file inputs for this channel
     */
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }

    /**
     * Specification of network and file inputs for this channel
     */
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecification = value; }

    /**
     * Specification of network and file inputs for this channel
     */
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecification = std::move(value); }

    /**
     * Specification of network and file inputs for this channel
     */
    inline StopChannelResult& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}

    /**
     * Specification of network and file inputs for this channel
     */
    inline StopChannelResult& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}


    /**
     * The log level being written to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevel = value; }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevel = std::move(value); }

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline StopChannelResult& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * The log level being written to CloudWatch Logs.
     */
    inline StopChannelResult& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the channel. (user-mutable)
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the channel. (user-mutable)
     */
    inline StopChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline StopChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the channel. (user-mutable)
     */
    inline StopChannelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline const Aws::Vector<PipelineDetail>& GetPipelineDetails() const{ return m_pipelineDetails; }

    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline void SetPipelineDetails(const Aws::Vector<PipelineDetail>& value) { m_pipelineDetails = value; }

    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline void SetPipelineDetails(Aws::Vector<PipelineDetail>&& value) { m_pipelineDetails = std::move(value); }

    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline StopChannelResult& WithPipelineDetails(const Aws::Vector<PipelineDetail>& value) { SetPipelineDetails(value); return *this;}

    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline StopChannelResult& WithPipelineDetails(Aws::Vector<PipelineDetail>&& value) { SetPipelineDetails(std::move(value)); return *this;}

    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline StopChannelResult& AddPipelineDetails(const PipelineDetail& value) { m_pipelineDetails.push_back(value); return *this; }

    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline StopChannelResult& AddPipelineDetails(PipelineDetail&& value) { m_pipelineDetails.push_back(std::move(value)); return *this; }


    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }

    /**
     * The number of currently healthy pipelines.
     */
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCount = value; }

    /**
     * The number of currently healthy pipelines.
     */
    inline StopChannelResult& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline StopChannelResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline StopChannelResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline StopChannelResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const ChannelState& GetState() const{ return m_state; }

    
    inline void SetState(const ChannelState& value) { m_state = value; }

    
    inline void SetState(ChannelState&& value) { m_state = std::move(value); }

    
    inline StopChannelResult& WithState(const ChannelState& value) { SetState(value); return *this;}

    
    inline StopChannelResult& WithState(ChannelState&& value) { SetState(std::move(value)); return *this;}


    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline StopChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    CdiInputSpecification m_cdiInputSpecification;

    ChannelClass m_channelClass;

    Aws::Vector<OutputDestination> m_destinations;

    Aws::Vector<ChannelEgressEndpoint> m_egressEndpoints;

    EncoderSettings m_encoderSettings;

    Aws::String m_id;

    Aws::Vector<InputAttachment> m_inputAttachments;

    InputSpecification m_inputSpecification;

    LogLevel m_logLevel;

    Aws::String m_name;

    Aws::Vector<PipelineDetail> m_pipelineDetails;

    int m_pipelinesRunningCount;

    Aws::String m_roleArn;

    ChannelState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
