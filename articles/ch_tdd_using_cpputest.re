
= CppUTestテストを使ったTDDの進め方
テストフレームワークCppUTestでTDDを進める方法について説明します。

== 開発環境の説明
今回確認した開発環境はこちらです。

=== ホスト環境
ホストの開発環境です。

 * ホストPC: MacBook （Retina, 12-inch, 2017）
 ** プロセッサ: 1.2GHzデュアルコアIntel Core m3
 ** メモリ: 8GB
 * ホストPC OS: macOS Ventura バージョン 13.2.1
 * テストフレームワーク: CppUTest 4.0
 * コンパイラ: Apple clang version 14.0.0 （clang-1400.0.29.202）
 * テスト対象プログラミング言語: C
 * ビルドシステム: cmake 3.21.1

//comment{
#@# 以前動作確認したホスト環境のバージョン
 * ホストPC: macOS Monterey バージョン 12.6
 * テストフレームワーク: CppUTest 4.0
 * コンパイラ: Apple clang version 11.0.0 （clang-1100.0.33.8）
 * テスト対象プログラミング言語: C
 * ビルドシステム: cmake 3.21.1
//}


=== ターゲット環境
ターゲットの開発環境です。STマイクロエレクトロニクス社の統合開発環境STM32CubeIDEを使用します。

 * STM32CubeIDE Version: 1.9.0
 * テストフレームワーク: CppUTest 4.0

== ホストでTDDする
=== 開発環境の確認

こちらのリポジトリからコードをダウンロードします。




== ターゲットでTDDする


