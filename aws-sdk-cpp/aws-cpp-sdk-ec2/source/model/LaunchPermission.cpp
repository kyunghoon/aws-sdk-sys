﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchPermission.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

LaunchPermission::LaunchPermission() : 
    m_group(PermissionGroup::NOT_SET),
    m_groupHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

LaunchPermission::LaunchPermission(const XmlNode& xmlNode) : 
    m_group(PermissionGroup::NOT_SET),
    m_groupHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchPermission& LaunchPermission::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupNode = resultNode.FirstChild("group");
    if(!groupNode.IsNull())
    {
      m_group = PermissionGroupMapper::GetPermissionGroupForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(groupNode.GetText()).c_str()).c_str());
      m_groupHasBeenSet = true;
    }
    XmlNode userIdNode = resultNode.FirstChild("userId");
    if(!userIdNode.IsNull())
    {
      m_userId = Aws::Utils::Xml::DecodeEscapedXmlText(userIdNode.GetText());
      m_userIdHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchPermission::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupHasBeenSet)
  {
      oStream << location << index << locationValue << ".Group=" << PermissionGroupMapper::GetNameForPermissionGroup(m_group) << "&";
  }

  if(m_userIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

}

void LaunchPermission::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupHasBeenSet)
  {
      oStream << location << ".Group=" << PermissionGroupMapper::GetNameForPermissionGroup(m_group) << "&";
  }
  if(m_userIdHasBeenSet)
  {
      oStream << location << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
