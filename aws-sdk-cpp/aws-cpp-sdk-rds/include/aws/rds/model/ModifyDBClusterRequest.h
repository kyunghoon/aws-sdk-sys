/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/CloudwatchLogsExportConfiguration.h>
#include <aws/rds/model/ScalingConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ModifyDBClusterRequest : public RDSRequest
  {
  public:
    ModifyDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline const Aws::String& GetNewDBClusterIdentifier() const{ return m_newDBClusterIdentifier; }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline bool NewDBClusterIdentifierHasBeenSet() const { return m_newDBClusterIdentifierHasBeenSet; }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline void SetNewDBClusterIdentifier(const Aws::String& value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier = value; }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline void SetNewDBClusterIdentifier(Aws::String&& value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier = std::move(value); }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline void SetNewDBClusterIdentifier(const char* value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier.assign(value); }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline ModifyDBClusterRequest& WithNewDBClusterIdentifier(const Aws::String& value) { SetNewDBClusterIdentifier(value); return *this;}

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline ModifyDBClusterRequest& WithNewDBClusterIdentifier(Aws::String&& value) { SetNewDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline ModifyDBClusterRequest& WithNewDBClusterIdentifier(const char* value) { SetNewDBClusterIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p>
     */
    inline ModifyDBClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline ModifyDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline ModifyDBClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline ModifyDBClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline ModifyDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline ModifyDBClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     */
    inline ModifyDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group. Changing this parameter doesn't result in an outage
     * except in the following case, and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> is enabled for this
     * request. If the parameter change results in an option group that enables OEM,
     * this change can cause a brief (sub-second) period during which new connections
     * are rejected but existing connections are not interrupted. </p> <p>Permanent
     * options can't be removed from an option group. The option group can't be removed
     * from a DB cluster once it is associated with a DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline ModifyDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline ModifyDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline ModifyDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline ModifyDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline ModifyDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline ModifyDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide.</i> </p>
     */
    inline ModifyDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline ModifyDBClusterRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const{ return m_cloudwatchLogsExportConfiguration; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p>
     */
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p>
     */
    inline void SetCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = value; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p>
     */
    inline void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::move(value); }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { SetCloudwatchLogsExportConfiguration(value); return *this;}

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster.</p>
     */
    inline ModifyDBClusterRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { SetCloudwatchLogsExportConfiguration(std::move(value)); return *this;}


    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline ModifyDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline ModifyDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for <code>aurora</code> (for
     * MySQL 5.6-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora),
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora-mysql --query "DBEngineVersions[].EngineVersion"</code> </p>
     * <p>To list all of the available engine versions for
     * <code>aurora-postgresql</code>, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline ModifyDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }

    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p>
     */
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p>
     */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p>
     */
    inline ModifyDBClusterRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}


    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceParameterGroupName() const{ return m_dBInstanceParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline bool DBInstanceParameterGroupNameHasBeenSet() const { return m_dBInstanceParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetDBInstanceParameterGroupName(const Aws::String& value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetDBInstanceParameterGroupName(Aws::String&& value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetDBInstanceParameterGroupName(const char* value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline ModifyDBClusterRequest& WithDBInstanceParameterGroupName(const Aws::String& value) { SetDBInstanceParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline ModifyDBClusterRequest& WithDBInstanceParameterGroupName(Aws::String&& value) { SetDBInstanceParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster. </p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes aren't applied during the next
     * maintenance window but instead are applied immediately.</p>  <p>Default:
     * The existing name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter
     * group must be in the same DB parameter group family as this DB cluster.</p>
     * </li> <li> <p>The <code>DBInstanceParameterGroupName</code> parameter is only
     * valid in combination with the <code>AllowMajorVersionUpgrade</code>
     * parameter.</p> </li> </ul>
     */
    inline ModifyDBClusterRequest& WithDBInstanceParameterGroupName(const char* value) { SetDBInstanceParameterGroupName(value); return *this;}


    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline ModifyDBClusterRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline ModifyDBClusterRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>. </p>
     */
    inline ModifyDBClusterRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline ModifyDBClusterRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline ModifyDBClusterRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline ModifyDBClusterRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     */
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     */
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     */
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     */
    inline ModifyDBClusterRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     */
    inline ModifyDBClusterRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline ModifyDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool GetEnableHttpEndpoint() const{ return m_enableHttpEndpoint; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool EnableHttpEndpointHasBeenSet() const { return m_enableHttpEndpointHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableHttpEndpoint(bool value) { m_enableHttpEndpointHasBeenSet = true; m_enableHttpEndpoint = value; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline ModifyDBClusterRequest& WithEnableHttpEndpoint(bool value) { SetEnableHttpEndpoint(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline ModifyDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>A value that indicates whether to enable write operations to be forwarded
     * from this cluster to the primary cluster in an Aurora global database. The
     * resulting changes are replicated back to this cluster. This parameter only
     * applies to DB clusters that are secondary clusters in an Aurora global database.
     * By default, Aurora disallows write operations for secondary clusters.</p>
     */
    inline bool GetEnableGlobalWriteForwarding() const{ return m_enableGlobalWriteForwarding; }

    /**
     * <p>A value that indicates whether to enable write operations to be forwarded
     * from this cluster to the primary cluster in an Aurora global database. The
     * resulting changes are replicated back to this cluster. This parameter only
     * applies to DB clusters that are secondary clusters in an Aurora global database.
     * By default, Aurora disallows write operations for secondary clusters.</p>
     */
    inline bool EnableGlobalWriteForwardingHasBeenSet() const { return m_enableGlobalWriteForwardingHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable write operations to be forwarded
     * from this cluster to the primary cluster in an Aurora global database. The
     * resulting changes are replicated back to this cluster. This parameter only
     * applies to DB clusters that are secondary clusters in an Aurora global database.
     * By default, Aurora disallows write operations for secondary clusters.</p>
     */
    inline void SetEnableGlobalWriteForwarding(bool value) { m_enableGlobalWriteForwardingHasBeenSet = true; m_enableGlobalWriteForwarding = value; }

    /**
     * <p>A value that indicates whether to enable write operations to be forwarded
     * from this cluster to the primary cluster in an Aurora global database. The
     * resulting changes are replicated back to this cluster. This parameter only
     * applies to DB clusters that are secondary clusters in an Aurora global database.
     * By default, Aurora disallows write operations for secondary clusters.</p>
     */
    inline ModifyDBClusterRequest& WithEnableGlobalWriteForwarding(bool value) { SetEnableGlobalWriteForwarding(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_newDBClusterIdentifier;
    bool m_newDBClusterIdentifierHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet;

    Aws::String m_dBInstanceParameterGroupName;
    bool m_dBInstanceParameterGroupNameHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    bool m_enableHttpEndpoint;
    bool m_enableHttpEndpointHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    bool m_enableGlobalWriteForwarding;
    bool m_enableGlobalWriteForwardingHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
