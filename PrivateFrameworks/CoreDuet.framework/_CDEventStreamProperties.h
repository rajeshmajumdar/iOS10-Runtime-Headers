/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDEventStreamProperties : NSObject {
    BOOL  canBeShared;
    BOOL  canBeSpeculative;
    BOOL  canPersistOnStorage;
    BOOL  canSendToServer;
    NSString * dataProtectionClass;
    int  deResolitionPolicy;
    NSString * descriptionString;
    int  eventsPerPeriod;
    BOOL  futureEvent;
    BOOL  hasStats;
    BOOL  isHistorical;
    BOOL  isInstant;
    NSString * knowledgeBaseName;
    double  maxLatency;
    NSString * name;
    double  period;
    int  pollingPeriod;
    BOOL  setupOnDemand;
    int  sharingPolicy;
    int  statisticsType;
    double  temporalPrecision;
    double  timeToLive;
    int  totalSizeLimit;
    int  valueType;
}

@property (nonatomic, readonly) BOOL canBeShared;
@property (nonatomic, readonly) BOOL canBeSpeculative;
@property (nonatomic, readonly) BOOL canPersistOnStorage;
@property (nonatomic, readonly) BOOL canSendToServer;
@property (nonatomic, readonly) NSString *dataProtectionClass;
@property (nonatomic, readonly) int deResolitionPolicy;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) int eventsPerPeriod;
@property (nonatomic, readonly) BOOL futureEvent;
@property (nonatomic, readonly) BOOL hasStats;
@property (nonatomic, readonly) BOOL isHistorical;
@property (nonatomic, readonly) BOOL isInstant;
@property (nonatomic, readonly) NSString *knowledgeBaseName;
@property (nonatomic, readonly) double maxLatency;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) int pollingPeriod;
@property (nonatomic, readonly) BOOL setupOnDemand;
@property (nonatomic, readonly) int sharingPolicy;
@property (nonatomic, readonly) int statisticsType;
@property (nonatomic, readonly) double temporalPrecision;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) int totalSizeLimit;
@property (nonatomic, readonly) int valueType;

+ (id)eventStreamPropertiesFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (BOOL)canBeShared;
- (BOOL)canBeSpeculative;
- (BOOL)canPersistOnStorage;
- (BOOL)canSendToServer;
- (id)dataProtectionClass;
- (int)deResolitionPolicy;
- (id)description;
- (id)descriptionString;
- (int)eventsPerPeriod;
- (BOOL)futureEvent;
- (BOOL)hasStats;
- (id)initFromDictionary:(id)arg1;
- (BOOL)isHistorical;
- (BOOL)isInstant;
- (id)knowledgeBaseName;
- (double)maxLatency;
- (id)name;
- (double)period;
- (int)pollingPeriod;
- (BOOL)setupOnDemand;
- (int)sharingPolicy;
- (int)statisticsType;
- (double)temporalPrecision;
- (double)timeToLive;
- (int)totalSizeLimit;
- (int)valueType;

@end
