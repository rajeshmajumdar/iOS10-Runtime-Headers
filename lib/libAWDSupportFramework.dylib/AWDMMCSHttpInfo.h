/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSHttpInfo : PBCodable <NSCopying> {
    BOOL  _cancelled;
    BOOL  _connectionReused;
    long long  _duration;
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int duration : 1; 
        unsigned int responseReceivedDuration : 1; 
        unsigned int startTime : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatus : 1; 
        unsigned int locatorPort : 1; 
        unsigned int requestSize : 1; 
        unsigned int responseSize : 1; 
        unsigned int cancelled : 1; 
        unsigned int connectionReused : 1; 
        unsigned int timedOut : 1; 
        unsigned int transactionComplete : 1; 
    }  _has;
    NSMutableArray * _httpErrors;
    int  _httpStatus;
    NSString * _interfaceIdentifier;
    NSString * _locatorHostname;
    NSString * _locatorPeerAddress;
    unsigned int  _locatorPort;
    NSString * _locatorScheme;
    int  _requestSize;
    long long  _responseReceivedDuration;
    int  _responseSize;
    long long  _startTime;
    NSMutableArray * _tcpInfos;
    BOOL  _timedOut;
    BOOL  _transactionComplete;
}

@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) long long duration;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasConnectionReused;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic, readonly) BOOL hasInterfaceIdentifier;
@property (nonatomic, readonly) BOOL hasLocatorHostname;
@property (nonatomic, readonly) BOOL hasLocatorPeerAddress;
@property (nonatomic) BOOL hasLocatorPort;
@property (nonatomic, readonly) BOOL hasLocatorScheme;
@property (nonatomic) BOOL hasRequestSize;
@property (nonatomic) BOOL hasResponseReceivedDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasTimedOut;
@property (nonatomic) BOOL hasTransactionComplete;
@property (nonatomic, retain) NSMutableArray *httpErrors;
@property (nonatomic) int httpStatus;
@property (nonatomic, retain) NSString *interfaceIdentifier;
@property (nonatomic, retain) NSString *locatorHostname;
@property (nonatomic, retain) NSString *locatorPeerAddress;
@property (nonatomic) unsigned int locatorPort;
@property (nonatomic, retain) NSString *locatorScheme;
@property (nonatomic) int requestSize;
@property (nonatomic) long long responseReceivedDuration;
@property (nonatomic) int responseSize;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSMutableArray *tcpInfos;
@property (nonatomic) BOOL timedOut;
@property (nonatomic) BOOL transactionComplete;

- (void)addHttpError:(id)arg1;
- (void)addTcpInfo:(id)arg1;
- (BOOL)cancelled;
- (void)clearHttpErrors;
- (void)clearTcpInfos;
- (BOOL)connectionReused;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (int)errorCode;
- (id)errorDomain;
- (BOOL)hasCancelled;
- (BOOL)hasConnectionReused;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasErrorDomain;
- (BOOL)hasHttpStatus;
- (BOOL)hasInterfaceIdentifier;
- (BOOL)hasLocatorHostname;
- (BOOL)hasLocatorPeerAddress;
- (BOOL)hasLocatorPort;
- (BOOL)hasLocatorScheme;
- (BOOL)hasRequestSize;
- (BOOL)hasResponseReceivedDuration;
- (BOOL)hasResponseSize;
- (BOOL)hasStartTime;
- (BOOL)hasTimedOut;
- (BOOL)hasTransactionComplete;
- (unsigned int)hash;
- (id)httpErrorAtIndex:(unsigned int)arg1;
- (id)httpErrors;
- (unsigned int)httpErrorsCount;
- (int)httpStatus;
- (id)interfaceIdentifier;
- (BOOL)isEqual:(id)arg1;
- (id)locatorHostname;
- (id)locatorPeerAddress;
- (unsigned int)locatorPort;
- (id)locatorScheme;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestSize;
- (long long)responseReceivedDuration;
- (int)responseSize;
- (void)setCancelled:(BOOL)arg1;
- (void)setConnectionReused:(BOOL)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasCancelled:(BOOL)arg1;
- (void)setHasConnectionReused:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasHttpStatus:(BOOL)arg1;
- (void)setHasLocatorPort:(BOOL)arg1;
- (void)setHasRequestSize:(BOOL)arg1;
- (void)setHasResponseReceivedDuration:(BOOL)arg1;
- (void)setHasResponseSize:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasTimedOut:(BOOL)arg1;
- (void)setHasTransactionComplete:(BOOL)arg1;
- (void)setHttpErrors:(id)arg1;
- (void)setHttpStatus:(int)arg1;
- (void)setInterfaceIdentifier:(id)arg1;
- (void)setLocatorHostname:(id)arg1;
- (void)setLocatorPeerAddress:(id)arg1;
- (void)setLocatorPort:(unsigned int)arg1;
- (void)setLocatorScheme:(id)arg1;
- (void)setRequestSize:(int)arg1;
- (void)setResponseReceivedDuration:(long long)arg1;
- (void)setResponseSize:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTcpInfos:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (void)setTransactionComplete:(BOOL)arg1;
- (long long)startTime;
- (id)tcpInfoAtIndex:(unsigned int)arg1;
- (id)tcpInfos;
- (unsigned int)tcpInfosCount;
- (BOOL)timedOut;
- (BOOL)transactionComplete;
- (void)writeTo:(id)arg1;

@end
