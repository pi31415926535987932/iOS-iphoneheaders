/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class TKTheme, TKArtworkView, NSMutableArray, UILabel;

@interface TKGridViewCell : UICollectionViewCell {

	float _cellHeight;
	TKTheme* _theme;
	TKArtworkView* _artwork;
	NSMutableArray* _labels;
	UILabel* _indexLabel;

}

@property (assign) float cellHeight;                               //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,retain) TKTheme * theme;                      //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) TKArtworkView * artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSMutableArray * labels;              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UILabel * indexLabel;                 //@synthesize indexLabel=_indexLabel - In the implementation block
-(void)prepLabels:(id)arg1 ;
-(void)updateWithComponent:(id)arg1 ;
-(void)setCellHeight:(float)arg1 ;
-(UILabel *)indexLabel;
-(void)setIndexLabel:(UILabel *)arg1 ;
-(void)setArtwork:(TKArtworkView *)arg1 ;
-(float)cellHeight;
-(void)setIndex:(int)arg1 ;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(TKArtworkView *)artwork;
-(TKTheme *)theme;
-(void)setTheme:(TKTheme *)arg1 ;
-(NSMutableArray *)labels;
@end
