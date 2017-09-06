
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xger32' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgerSingle = {
  "Xger", Precision::kSingle, {"WGS1", "WGS2", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { 256, 1, 1 } },
        { "ATI Radeon HD 6750M",                             { 16, 16, 4 } },
        { "Ellesmere",                                       { 64, 4, 2 } },
        { "Fiji",                                            { 256, 1, 1 } },
        { "Hawaii",                                          { 64, 2, 1 } },
        { "Oland",                                           { 32, 4, 2 } },
        { "Pitcairn",                                        { 64, 1, 1 } },
        { "Tahiti",                                          { 256, 1, 1 } },
        { "Tonga",                                           { 256, 1, 2 } },
        { "Turks",                                           { 64, 4, 2 } },
        { "default",                                         { 16, 16, 1 } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "Mali-T628",                                       { 64, 4, 4 } },
        { "default",                                         { 64, 4, 4 } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 32, 4, 4 } },
        { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 128, 2, 4 } },
        { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 256, 16, 4 } },
        { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 256, 4, 4 } },
        { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 128, 1, 4 } },
        { "default",                                         { 128, 8, 4 } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Intel(R) HD Graphics 530",                        { 32, 1, 2 } },
        { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 256, 2, 2 } },
        { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 128, 1, 2 } },
        { "Intel(R) HD Graphics IvyBridge M GT2",            { 64, 1, 4 } },
        { "Intel(R) HD Graphics Skylake ULT GT2",            { 32, 4, 4 } },
        { "Iris Pro",                                        { 64, 1, 4 } },
        { "default",                                         { 32, 4, 2 } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GRID K520",                                       { 128, 1, 2 } },
        { "GeForce GT 650M",                                 { 32, 16, 4 } },
        { "GeForce GTX 1070",                                { 512, 1, 1 } },
        { "GeForce GTX 1080",                                { 16, 4, 1 } },
        { "GeForce GTX 480",                                 { 256, 1, 4 } },
        { "GeForce GTX 670",                                 { 32, 8, 2 } },
        { "GeForce GTX 680",                                 { 128, 1, 4 } },
        { "GeForce GTX 750",                                 { 64, 16, 4 } },
        { "GeForce GTX 750 Ti",                              { 64, 1, 2 } },
        { "GeForce GTX TITAN",                               { 32, 4, 2 } },
        { "GeForce GTX TITAN Black",                         { 32, 4, 2 } },
        { "TITAN X (Pascal)",                                { 512, 2, 1 } },
        { "default",                                         { 128, 1, 2 } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "QUALCOMM Adreno(TM)",                             { 128, 1, 2 } },
        { "default",                                         { 128, 1, 2 } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { 32, 4, 2 } },
      }
    },
  }
};

} // namespace database
} // namespace clblast