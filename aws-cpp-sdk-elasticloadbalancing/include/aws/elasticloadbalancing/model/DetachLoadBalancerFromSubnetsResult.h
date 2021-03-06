﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output of DetachLoadBalancerFromSubnets.</p>
   */
  class AWS_ELASTICLOADBALANCING_API DetachLoadBalancerFromSubnetsResult
  {
  public:
    DetachLoadBalancerFromSubnetsResult();
    DetachLoadBalancerFromSubnetsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DetachLoadBalancerFromSubnetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnets = value; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnets = value; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& AddSubnets(const Aws::String& value) { m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& AddSubnets(Aws::String&& value) { m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the remaining subnets for the load balancer.</p>
     */
    inline DetachLoadBalancerFromSubnetsResult& AddSubnets(const char* value) { m_subnets.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DetachLoadBalancerFromSubnetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DetachLoadBalancerFromSubnetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_subnets;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws