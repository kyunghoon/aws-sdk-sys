﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/EgressOnlyInternetGateway.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API CreateEgressOnlyInternetGatewayResponse
  {
  public:
    CreateEgressOnlyInternetGatewayResponse();
    CreateEgressOnlyInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateEgressOnlyInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Information about the egress-only internet gateway.</p>
     */
    inline const EgressOnlyInternetGateway& GetEgressOnlyInternetGateway() const{ return m_egressOnlyInternetGateway; }

    /**
     * <p>Information about the egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGateway(const EgressOnlyInternetGateway& value) { m_egressOnlyInternetGateway = value; }

    /**
     * <p>Information about the egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGateway(EgressOnlyInternetGateway&& value) { m_egressOnlyInternetGateway = std::move(value); }

    /**
     * <p>Information about the egress-only internet gateway.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithEgressOnlyInternetGateway(const EgressOnlyInternetGateway& value) { SetEgressOnlyInternetGateway(value); return *this;}

    /**
     * <p>Information about the egress-only internet gateway.</p>
     */
    inline CreateEgressOnlyInternetGatewayResponse& WithEgressOnlyInternetGateway(EgressOnlyInternetGateway&& value) { SetEgressOnlyInternetGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateEgressOnlyInternetGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateEgressOnlyInternetGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;

    EgressOnlyInternetGateway m_egressOnlyInternetGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
