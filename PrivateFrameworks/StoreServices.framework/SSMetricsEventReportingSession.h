/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventReportingSession : NSObject {
    SSMetricsEventController * _eventController;
    long long  _insertTimestamp;
    NSURL * _reportingURL;
    NSMutableArray * _unreportedEventPIDs;
    NSArray * _unreportedEvents;
}

- (id)_unreportedEvents;
- (void)_writeString:(id)arg1 toData:(id)arg2;
- (BOOL)anyUnreportedEvents;
- (void)dealloc;
- (id)initWithReportingURL:(id)arg1 insertTimestamp:(long long)arg2 eventController:(id)arg3;
- (BOOL)markEventsAsReported;
- (void)writeEventsToStream:(id)arg1;

@end
