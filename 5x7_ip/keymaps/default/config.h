/*
Copyright 2022 Ivan Pimchenko

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Чтобы кабель можно было подключать в любую половину
#define EE_HANDS

// Количество нажатий для закрепления слоя ТТ
// Не очень понимаю зачем нужны значения больше '1'. Это имело бы смысл, если бы этот кейкод
// можно было комбинировать с другими: например при TAPPING_TOGGLE 2 одно нажатие генерило бы
// условный KC_A, а два нажатия включали бы слой. Но ведь этот код можно использовать только
// сам по себе, комбинировать его с другими кодами нельзя. Непонятно...
#define TAPPING_TOGGLE 1

// Была проблема: при быстрой печати на словах, содержащих клавиши Mod-Tap возникала ситуация,
// когда клавиша Mod-Tap еще не успела отжаться, а в это время уже нажималась следующая клавиша.
// Например вместо слова 'жаба' выходило 'Аба'.
// Строками ниже пытался решить вышеописанную проблему. Документация по этому вопросу тут:
// https://docs.qmk.fm/#/tap_hold

// Милисекунда (мс) - 0.001 (одна тысячная) секунды.

// Задаёт время, которое будет считаться нажатием в мс.
// Т.е. если от нажатия прошло больше этого времени, то клавиша считается удержанной.
#define TAPPING_TERM 130 // 200 по-умолчанию, на 120-130 ещё можно юзать, но проблему не решало

// Соглано справке, такая комбинация: 
// SFT_T(KC_A) Down
// KC_X Down
// KC_X Up
// SFT_T(KC_A) Up
// если она проведена в теч. TAPPING_TERM, по-умолчанию должна выдавать 'ax'.
// Если же установлена опция PERMISSIVE_HOLD, то такая комбинация будет давать 'X'.
// Но что-то похоже, что у меня как раз работает наоборот. Собственно включение этой опции
// никаких видимых изменений не даёт.
//#define PERMISSIVE_HOLD // проблему не решало
#undef PERMISSIVE_HOLD // принудительная отмена, также проблему не решало

// Одно время показалось, что это решило проблему, но нет.
#define IGNORE_MOD_TAP_INTERRUPT
// Обратная операция аналогично не помогла
//#undef IGNORE_MOD_TAP_INTERRUPT
