#pragma once

const std::string& GetThreadOffsetName(intptr_t offset);
intptr_t GetThreadMaxOffset();

// use for dumping all thread offsets
const std::unordered_map<intptr_t, std::string>& GetThreadOffsetsMap();
