﻿# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

import shutil
import os

def getDirectories():
    return [    "aws-cpp-sdk-autoscaling",
                "aws-cpp-sdk-acm",
                "aws-cpp-sdk-apigateway",
                "aws-cpp-sdk-cloudhsm",
                "aws-cpp-sdk-cloudformation",
                "aws-cpp-sdk-cloudfront",
                "aws-cpp-sdk-cloudsearch",
                "aws-cpp-sdk-cloudsearchdomain",
                "aws-cpp-sdk-cloudtrail",
                "aws-cpp-sdk-codecommit",
                "aws-cpp-sdk-codedeploy",
                "aws-cpp-sdk-codepipeline",
                "aws-cpp-sdk-cognito-identity",
                "aws-cpp-sdk-cognito-sync",
                "aws-cpp-sdk-config",
                "aws-cpp-sdk-datapipeline",
                "aws-cpp-sdk-devicefarm",
                "aws-cpp-sdk-directconnect",
                "aws-cpp-sdk-ds",
                "aws-cpp-sdk-dynamodb",
                "aws-cpp-sdk-ec2",
                "aws-cpp-sdk-ecs",
                "aws-cpp-sdk-ecr",
                "aws-cpp-sdk-elasticache",
                "aws-cpp-sdk-elasticbeanstalk",
                "aws-cpp-sdk-elasticfilesystem",
                "aws-cpp-sdk-elasticloadbalancing",
                "aws-cpp-sdk-elasticmapreduce",
                "aws-cpp-sdk-elastictranscoder",
                "aws-cpp-sdk-email",
                "aws-cpp-sdk-es",
                "aws-cpp-sdk-events",
                "aws-cpp-sdk-firehose",
                "aws-cpp-sdk-gamelift",
                "aws-cpp-sdk-glacier",
                "aws-cpp-sdk-iam",
                "aws-cpp-sdk-importexport",
                "aws-cpp-sdk-inspector",
                "aws-cpp-sdk-iot",
                "aws-cpp-sdk-kinesis",
                "aws-cpp-sdk-kms",
                "aws-cpp-sdk-lambda",
                "aws-cpp-sdk-logs",
                "aws-cpp-sdk-machinelearning",
                "aws-cpp-sdk-marketplacecommerceanalytics",
                "aws-cpp-sdk-mobileanalytics",
                "aws-cpp-sdk-monitoring",
                "aws-cpp-sdk-opsworks",
                "aws-cpp-sdk-rds",
                "aws-cpp-sdk-redshift",
                "aws-cpp-sdk-route53",
                "aws-cpp-sdk-route53domains",
                "aws-cpp-sdk-s3",
                "aws-cpp-sdk-sdb",
                "aws-cpp-sdk-sns",
                "aws-cpp-sdk-sqs",
                "aws-cpp-sdk-ssm",
                "aws-cpp-sdk-storagegateway",
                "aws-cpp-sdk-sts",
                "aws-cpp-sdk-support",
                "aws-cpp-sdk-swf",
                "aws-cpp-sdk-waf",
                "aws-cpp-sdk-workspaces",
                "aws-cpp-sdk-application-autoscaling",
		"aws-cpp-sdk-cognito-idp",
                "aws-cpp-sdk-dms",
		"aws-cpp-sdk-meteringmarketplace"  ]

def wipeGeneratedCode():
    for directory in getDirectories():
        if os.path.exists( directory ):
            shutil.rmtree( directory )
