/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfile : NSObject {
    NSString * _UUID;
    NSString * _displayName;
    BOOL  _encrypted;
    NSDate * _expiryDate;
    NSString * _identifier;
    NSDate * _installDate;
    NSDictionary * _installOptions;
    BOOL  _isLocked;
    BOOL  _isStub;
    NSString * _localizedConsentText;
    BOOL  _mustInstallNonInteractively;
    BOOL  _needsReboot;
    NSString * _organization;
    NSString * _productBuildVersion;
    NSString * _productVersion;
    NSString * _profileDescription;
    NSDate * _removalDate;
    NSString * _removalPasscode;
    NSObject<OS_dispatch_queue> * _signerEvaluationQueue;
    NSArray * _signerQueueSignerCertificates;
    NSString * _signerQueueSignerSummary;
    NSObject<OS_dispatch_queue> * _trustEvaluationQueue;
    BOOL  _trustQueueTrustHasBeenEvaluated;
    int  _trustQueueTrustLevel;
    int  _version;
}

@property (nonatomic, readonly, retain) NSString *UUID;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly, retain) NSDate *earliestCertificateExpiryDate;
@property (getter=isEncrypted, nonatomic) BOOL encrypted;
@property (nonatomic, readonly, retain) NSDate *expiryDate;
@property (nonatomic, readonly, retain) NSString *friendlyName;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *installDate;
@property (nonatomic, retain) NSDictionary *installOptions;
@property (nonatomic, readonly, retain) NSArray *installationWarnings;
@property (nonatomic, readonly) BOOL isManagedByProfileService;
@property (nonatomic, readonly) BOOL isSigned;
@property (nonatomic, readonly) BOOL isStub;
@property (nonatomic, readonly) NSString *localizedConsentText;
@property (nonatomic, readonly, retain) NSArray *localizedManagedPayloadSummaryByType;
@property (nonatomic, readonly, retain) NSArray *localizedPayloadSummaryByType;
@property (getter=isLocked, nonatomic) BOOL locked;
@property (nonatomic, readonly, retain) NSArray *managedPayloads;
@property (nonatomic) BOOL mustInstallNonInteractively;
@property (nonatomic, readonly) BOOL needsReboot;
@property (nonatomic, readonly, retain) NSString *organization;
@property (nonatomic, readonly, retain) NSArray *payloads;
@property (nonatomic, readonly, retain) NSString *productBuildVersion;
@property (nonatomic, readonly, retain) NSString *productVersion;
@property (nonatomic, readonly, retain) NSString *profileDescription;
@property (nonatomic, readonly, retain) NSString *profileIDHashFileName;
@property (nonatomic, readonly) NSDate *removalDate;
@property (nonatomic, retain) NSString *removalPasscode;
@property (nonatomic, readonly) struct __SecCertificate { }*signerCertificate;
@property (nonatomic, retain) NSArray *signerCertificates;
@property (nonatomic, readonly) NSString *signerSummary;
@property (nonatomic, readonly, retain) NSString *stubFileName;
@property (nonatomic, readonly) int trustLevel;
@property (nonatomic, readonly) int version;

+ (id)_malformedProfileError;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(int)arg5 errorString:(id)arg6 outError:(id*)arg7;
+ (id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id*)arg2;
+ (int)evaluateTrust:(struct __SecTrust { }*)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 outIsAllowedToWriteDefaults:(BOOL*)arg2;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (id)profileDictionaryFromProfileData:(id)arg1 outError:(id*)arg2;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id*)arg3;
+ (id)profileWithData:(id)arg1 outError:(id*)arg2;
+ (id)profileWithDictionary:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(int)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(int)arg7 invalidDataErrorString:(id)arg8 outError:(id*)arg9;
+ (id)signerSummaryOfCertificate:(struct __SecCertificate { }*)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)appAccessibilityParameters;
- (BOOL)containsPayloadOfClass:(Class)arg1;
- (struct __SecCertificate { }*)copyCertificateFromPayloadWithUUID:(id)arg1;
- (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
- (unsigned int)countOfPayloadsOfClass:(Class)arg1;
- (id)description;
- (id)displayName;
- (id)earliestCertificateExpiryDate;
- (void)evaluateSignerTrust;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id /* block */)arg1;
- (id)expiryDate;
- (id)friendlyName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3;
- (id)installDate;
- (id)installOptions;
- (id)installationWarnings;
- (id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1;
- (BOOL)isEncrypted;
- (BOOL)isLocked;
- (BOOL)isManagedByProfileService;
- (BOOL)isSigned;
- (BOOL)isStub;
- (id)localizedConsentText;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)malformedProfileErrorWithError:(id)arg1;
- (id)managedPayloads;
- (BOOL)mayInstallWithOptions:(id)arg1 hasInteractionClient:(BOOL)arg2 outError:(id*)arg3;
- (BOOL)mustInstallNonInteractively;
- (BOOL)needsReboot;
- (id)organization;
- (id)payloadWithUUID:(id)arg1;
- (id)payloads;
- (id)productBuildVersion;
- (id)productVersion;
- (id)profileDescription;
- (id)profileIDHashFileName;
- (id)removalDate;
- (id)removalPasscode;
- (id)restrictionsWithHeuristicsAppliedOutError:(id*)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEncrypted:(BOOL)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setInstallOptions:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setMustInstallNonInteractively:(BOOL)arg1;
- (void)setRemovalPasscode:(id)arg1;
- (void)setSignerCertificates:(id)arg1;
- (struct __SecCertificate { }*)signerCertificate;
- (id)signerCertificates;
- (id)signerSummary;
- (id)stubDictionary;
- (id)stubFileName;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (int)trustLevel;
- (int)version;
- (BOOL)writeStubToDirectory:(id)arg1;
- (BOOL)writeStubToPath:(id)arg1;

@end
