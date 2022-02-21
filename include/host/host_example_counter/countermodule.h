// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "host/host_example_counter/counterenv.h"
#include "runtime/importobj.h"

#include <cstdint>

namespace WasmEdge {
namespace Host {

class CounterModule : public Runtime::ImportObject {
public:
  CounterModule();

  CounterEnvironment &getEnv() { return Env; }

private:
  CounterEnvironment Env;
};

} // namespace Host
} // namespace WasmEdge
