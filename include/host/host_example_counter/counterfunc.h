// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "common/defines.h"
#include "host/host_example_counter/counterbase.h"

namespace WasmEdge {
namespace Host {

class CounterFuncClick 
    : public CounterFunc<CounterFuncClick> {
public:
  CounterFuncClick(CounterEnvironment &HostEnv)
      : CounterFunc(HostEnv) {}
  WasmEdge::Expect<void>
  body([[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst);
};

class CounterFuncGetCount 
    : public CounterFunc<CounterFuncGetCount> {
public:
  CounterFuncGetCount(CounterEnvironment &HostEnv)
      : CounterFunc(HostEnv) {}
  WasmEdge::Expect<uint32_t>
  body([[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst);
};

class CounterFuncForwardBy 
    : public CounterFunc<CounterFuncForwardBy> {
public:
  CounterFuncForwardBy(CounterEnvironment &HostEnv)
      : CounterFunc(HostEnv) {}
  WasmEdge::Expect<void> body([[maybe_unused]] Runtime::Instance::MemoryInstance
                                  *MemInst, uint32_t increment);
};

} // namespace Host
} // namespace WasmEdge
