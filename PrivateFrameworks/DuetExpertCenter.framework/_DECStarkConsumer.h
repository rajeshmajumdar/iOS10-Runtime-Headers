/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECStarkConsumer : _DECInternalConsumer {
    void * _activity;
    NSUUID * _predictionToClear;
    NSObject<OS_dispatch_queue> * _queue;
}

@property void*activity;
@property (retain) NSUUID *predictionToClear;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_clearRecommendation;
- (void)_recommend:(id)arg1;
- (void*)activity;
- (void)dealloc;
- (id)init;
- (id)predictionToClear;
- (id)queue;
- (void)receivePrediction:(id)arg1 reply:(id /* block */)arg2;
- (void)setActivity:(void*)arg1;
- (void)setPredictionToClear:(id)arg1;
- (void)setQueue:(id)arg1;

@end
