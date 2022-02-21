// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace WasmEdge {
namespace Host {

// env for host counter
class CounterEnvironment {
public:
  /// Define your environment variables and data structures

  /// Const
  /// Variables
  uint32_t already_count;
  /// Initial Configurations
};

} // namespace Host
} // namespace WasmEdge
