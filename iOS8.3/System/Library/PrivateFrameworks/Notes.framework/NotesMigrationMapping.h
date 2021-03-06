/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:30 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, NSArray, NSString;

@interface NotesMigrationMapping : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSArray* _sourceModels;
	NSString* _descriptionString;
	int _type;

}

@property (retain) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (copy) NSArray * sourceModels;                                 //@synthesize sourceModels=_sourceModels - In the implementation block
@property (copy) NSString * descriptionString;                           //@synthesize descriptionString=_descriptionString - In the implementation block
@property (assign) int type;                                             //@synthesize type=_type - In the implementation block
+(id)mappings;
+(id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)modelForModelName:(id)arg1 ;
+(id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2 ;
-(NSManagedObjectModel *)destinationModel;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setDescriptionString:(NSString *)arg1 ;
-(char)canMigrateStoreMetadata:(id)arg1 ;
-(id)sourceModelForStoreMetadata:(id)arg1 ;
-(id)mappingModelForStoreMetadata:(id)arg1 ;
-(void)setSourceModels:(NSArray *)arg1 ;
-(void)setDestinationModel:(NSManagedObjectModel *)arg1 ;
-(NSArray *)sourceModels;
-(NSString *)descriptionString;
@end

