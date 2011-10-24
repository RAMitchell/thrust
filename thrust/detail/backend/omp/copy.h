/*
 *  Copyright 2008-2011 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>
#include <thrust/system/omp/detail/tag.h>

namespace thrust
{
namespace detail
{
namespace backend
{
namespace omp
{


template<typename InputIterator,
         typename OutputIterator,
         typename Tag>
OutputIterator copy(Tag,
                    InputIterator first,
                    InputIterator last,
                    OutputIterator result);


template<typename InputIterator,
         typename Size,
         typename OutputIterator,
         typename Tag>
OutputIterator copy_n(Tag,
                      InputIterator first,
                      Size n,
                      OutputIterator result);


} // end namespace omp
} // end namespace backend
} // end namespace detail
} // end namespace thrust

#include <thrust/detail/backend/omp/copy.inl>

