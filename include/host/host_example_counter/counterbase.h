// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "common/errcode.h"
#include "host/host_example_counter/counterenv.h"
#include "runtime/hostfunc.h"

namespace WasmEdge {
namespace Host {

template <typename T> 
class CounterFunc : public Runtime::HostFunction<T> {
public:
  CounterFunc(CounterEnvironment &HostEnv)
      : Runtime::HostFunction<T>(0), Env(HostEnv) {}

protected:
  CounterEnvironment &Env;
};

} // namespace Host
} // namespace WasmEdge
