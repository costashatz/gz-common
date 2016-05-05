/*
 * Copyright (C) 2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef _IGNITION_COMMON_NODE_TRANSFORM_PRIVATE_HH_
#define _IGNITION_COMMON_NODE_TRANSFORM_PRIVATE_HH_

#include <string>
#include <vector>
#include <ignition/math/Matrix4.hh>
#include <ignition/common/Util.hh>

namespace ignition
{
  namespace common
  {
    /// \internal
    /// \brief Private data for NodeTransform
    class NodeTransformPrivate
    {
      /// \brief the sid
      public: std::string sid;

      /// \brief transform type
      public: NodeTransformType type;

      /// \brief transform
      public: math::Matrix4d transform;

      /// \brief source data values (can be a matrix, a position or rotation)
      public: std::vector<double> source;
    };
  }
}
#endif