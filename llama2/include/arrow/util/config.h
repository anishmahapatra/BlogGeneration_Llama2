// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#define ARROW_VERSION_MAJOR 14
#define ARROW_VERSION_MINOR 0
#define ARROW_VERSION_PATCH 2
#define ARROW_VERSION ((ARROW_VERSION_MAJOR * 1000) + ARROW_VERSION_MINOR) * 1000 + ARROW_VERSION_PATCH

#define ARROW_VERSION_STRING "14.0.2"

#define ARROW_SO_VERSION "1400"
#define ARROW_FULL_SO_VERSION "1400.2.0"

#define ARROW_CXX_COMPILER_ID "Clang"
#define ARROW_CXX_COMPILER_VERSION "14.0.6"
#define ARROW_CXX_COMPILER_FLAGS "-ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -stdlib=libc++ -fvisibility-inlines-hidden -fmessage-length=0 -isystem /Users/anishmahapatra/Work/AI Projects/BlogGeneration_Llama2/llama2/include -fdebug-prefix-map=/var/folders/k1/30mswbxs7r1g6zwn8y4fyt500000gp/T/abs_12800ilod2/croot/arrow-cpp_1707253275500/work=/usr/local/src/conda/arrow-cpp-14.0.2 -fdebug-prefix-map=/Users/anishmahapatra/Work/AI Projects/BlogGeneration_Llama2/llama2=/usr/local/src/conda-prefix -Qunused-arguments -fcolor-diagnostics"

#define ARROW_BUILD_TYPE "RELEASE"

#define ARROW_GIT_ID ""
#define ARROW_GIT_DESCRIPTION ""

#define ARROW_PACKAGE_KIND ""

#define ARROW_COMPUTE
#define ARROW_CSV
/* #undef ARROW_CUDA */
#define ARROW_DATASET
#define ARROW_FILESYSTEM
#define ARROW_FLIGHT
#define ARROW_FLIGHT_SQL
#define ARROW_IPC
#define ARROW_JEMALLOC
#define ARROW_JEMALLOC_VENDORED
#define ARROW_JSON
#define ARROW_ORC
#define ARROW_PARQUET
#define ARROW_SUBSTRAIT

#define ARROW_ENABLE_THREADING
/* #undef ARROW_GCS */
#define ARROW_S3
#define ARROW_USE_NATIVE_INT128
/* #undef ARROW_WITH_MUSL */
/* #undef ARROW_WITH_OPENTELEMETRY */
/* #undef ARROW_WITH_UCX */
#define PARQUET_REQUIRE_ENCRYPTION