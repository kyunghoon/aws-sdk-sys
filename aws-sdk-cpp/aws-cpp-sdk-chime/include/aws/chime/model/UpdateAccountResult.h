/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Account.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API UpdateAccountResult
  {
  public:
    UpdateAccountResult();
    UpdateAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Account& GetAccount() const{ return m_account; }

    
    inline void SetAccount(const Account& value) { m_account = value; }

    
    inline void SetAccount(Account&& value) { m_account = std::move(value); }

    
    inline UpdateAccountResult& WithAccount(const Account& value) { SetAccount(value); return *this;}

    
    inline UpdateAccountResult& WithAccount(Account&& value) { SetAccount(std::move(value)); return *this;}

  private:

    Account m_account;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
