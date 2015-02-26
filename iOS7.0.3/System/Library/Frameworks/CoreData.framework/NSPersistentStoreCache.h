/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface NSPersistentStoreCache : NSObject {

	id _externalData;
	unsigned _capacity;

}
+(void)initialize;
-(void)_createExternalDataDictWithValueCallbacks:(void*)arg1 ;
-(id)_initWithValueCallbacks:(void*)arg1 ;
-(void)_doForgetAllExternalData:(void*)arg1 ;
-(void)forgetExternalDataForObjectID:(id)arg1 ;
-(void)_growRegistrationCollectionTo:(unsigned)arg1 ;
-(void)forgetAllExternalData;
-(void)decrementRefCountForObjectID:(id)arg1 ;
-(void)incrementRefCountForObjectID:(id)arg1 ;
-(int)refCountForObjectID:(id)arg1 ;
-(void)registerExternalData:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(id)externalDataForObjectID:(id)arg1 timestamp:(double)arg2 ;
-(unsigned)optionsForObjectID:(id)arg1 ;
-(void)registerExternalData:(id)arg1 forSourceObjectID:(id)arg2 forProperty:(id)arg3 options:(unsigned)arg4 andTimestamp:(double)arg5 ;
-(id)externalDataForSourceObjectID:(id)arg1 forProperty:(id)arg2 timestamp:(double)arg3 ;
-(void)registerAncillaryOrderKeys:(id)arg1 forSourceObjectID:(id)arg2 forProperty:(id)arg3 options:(unsigned)arg4 andTimestamp:(double)arg5 ;
-(id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 timestamp:(double)arg3 ;
-(void)dealloc;
-(id)init;
@end
