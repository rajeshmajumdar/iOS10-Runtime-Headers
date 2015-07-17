/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleAggregator : NSObject {
    NSMutableArray * _machTimestamps;
    PASampleAggregatorOptions * _options;
    PASampleTimeSeriesDataStore * _sampleStore;
    NSMutableSet * _tasks;
    NSMutableArray * _wallTimestamps;
}

@property BOOL binaryImagesBeforeStacks;
@property (readonly) unsigned int count;
@property BOOL displayBinaryImageAddresses;
@property BOOL displayBinaryImagesLackingNameOrPath;
@property BOOL displayBlockedThreads;
@property BOOL displayFrameAddresses;
@property BOOL displayIdleWorkQueueThreads;
@property BOOL displayOffsetsFromUnnamedSymbols;
@property BOOL displayProcessFirstLastTimes;
@property BOOL displayRunnableThreads;
@property BOOL displayStateChangesOnIdleThreads;
@property BOOL displaySub1MsCpuTime;
@property BOOL displaySymbolInformation;
@property BOOL headerOnly;
@property PASampleAggregatorOptions *options;
@property (readonly) PASampleTimeSeriesDataStore *sampleStore;
@property BOOL tabDelineateBinaryImageSections;
@property (retain) NSMutableSet *tasks;
@property BOOL verbose;

- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (BOOL)binaryImagesBeforeStacks;
- (unsigned int)count;
- (void)dealloc;
- (BOOL)displayBinaryImageAddresses;
- (BOOL)displayBinaryImagesLackingNameOrPath;
- (BOOL)displayBlockedThreads;
- (BOOL)displayFrameAddresses;
- (BOOL)displayIdleWorkQueueThreads;
- (BOOL)displayOffsetsFromUnnamedSymbols;
- (BOOL)displayProcessFirstLastTimes;
- (BOOL)displayRunnableThreads;
- (BOOL)displayStateChangesOnIdleThreads;
- (BOOL)displaySub1MsCpuTime;
- (BOOL)displaySymbolInformation;
- (unsigned int)firstTimestampIndexAfterMachTime:(double)arg1;
- (unsigned int)firstTimestampIndexAfterWallTime:(double)arg1;
- (BOOL)headerOnly;
- (id)initWithSampleStore:(id)arg1;
- (double)machTimeAtTimestampIndex:(unsigned int)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (id)options;
- (void)printDateToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printFooterToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printHeaderToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)sampleStore;
- (void)setBinaryImagesBeforeStacks:(BOOL)arg1;
- (void)setDisplayBinaryImageAddresses:(BOOL)arg1;
- (void)setDisplayBinaryImagesLackingNameOrPath:(BOOL)arg1;
- (void)setDisplayBlockedThreads:(BOOL)arg1;
- (void)setDisplayFrameAddresses:(BOOL)arg1;
- (void)setDisplayIdleWorkQueueThreads:(BOOL)arg1;
- (void)setDisplayOffsetsFromUnnamedSymbols:(BOOL)arg1;
- (void)setDisplayProcessFirstLastTimes:(BOOL)arg1;
- (void)setDisplayRunnableThreads:(BOOL)arg1;
- (void)setDisplayStateChangesOnIdleThreads:(BOOL)arg1;
- (void)setDisplaySub1MsCpuTime:(BOOL)arg1;
- (void)setDisplaySymbolInformation:(BOOL)arg1;
- (void)setHeaderOnly:(BOOL)arg1;
- (void)setOptions:(id)arg1;
- (void)setSamples:(id)arg1;
- (void)setTabDelineateBinaryImageSections:(BOOL)arg1;
- (void)setTasks:(id)arg1;
- (void)setVerbose:(BOOL)arg1;
- (id)sortedTasks;
- (BOOL)tabDelineateBinaryImageSections;
- (id)tasks;
- (BOOL)verbose;
- (double)wallTimeAtTimestampIndex:(unsigned int)arg1;

@end
